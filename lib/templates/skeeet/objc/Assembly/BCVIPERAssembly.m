//
// Created by VIPER
// Copyright (c) 2015 VIPER. All rights reserved.
//

#import "BCVIPERAssembly.h"
#import "BCVIPERPresenter.h"
#import "BCVIPERInteractor.h"
#import "BCVIPERDataManager.h"
#import "BCVIPERView.h"

#import "BCApplicationAssembly.h"
#import "BCServicesAssembly.h"


@interface BCVIPERAssembly()
@property(strong, nonatomic, readonly) BCApplicationAssembly * applicationAssembly;
@property (nonatomic, strong, readonly) BCServicesAssembly * servicesAssembly;

@end


@implementation BCVIPERAssembly

-(UIViewController<BCVIPERViewProtocol> *) createVIPERView
{
    return [TyphoonDefinition withClass:[BCVIPERView class]
                          configuration:^(TyphoonDefinition *definition)
            {
	            [definition injectProperty:@selector(presenter) with:[self createVIPERPresenter]];
            }];
}

-(id<BCVIPERPresenterProtocol>) createVIPERPresenter
{
    return [TyphoonDefinition withClass:[BCVIPERPresenter class] configuration:^(TyphoonDefinition *definition)
            {
                [definition injectProperty:@selector(view) with:[self createVIPERView]];
                [definition injectProperty:@selector(interactor) with:[self createVIPERInteractor]];
//                [definition injectProperty:@selector(navigator) with:[_applicationAssembly navigator]];
            }];
}

-(id<BCVIPERInteractorInputProtocol>) createVIPERInteractor
{
    return [TyphoonDefinition withClass:[BCVIPERInteractor class] configuration:^(TyphoonDefinition *definition) {
        [definition injectProperty:@selector(presenter) with:[self createVIPERPresenter]];
        [definition injectProperty:@selector(localDataManager) with:[self createVIPERDataManager]];
    }];
}


-(id<BCVIPERDataManagerInputProtocol>) createVIPERDataManager
{
    return [TyphoonDefinition withClass:[BCVIPERDataManager class] configuration:^(TyphoonDefinition *definition) {
        
    }];
}





@end
