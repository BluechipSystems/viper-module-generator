//
//  Created by AUTHOR
//  Copyright (c) YEAR AUTHOR. All rights reserved.
//

#import "BCVIPERWireframe.h"
#import "BCVIPERViewController.h"
#import "BCVIPERInteractor.h"
#import "BCVIPERPresenter.h"
#import "BCVIPERWireframe.h"
#import "BCVIPERDataManager.h"


#import "BCRootWireframe.h"
#import "BCLocalDataStore.h"

@interface BCVIPERWireframe()
@end

@implementation BCVIPERWireframe


#pragma mark - Dependencies

- (BCVIPERViewController*)createDependencies
{
    
    // Generating module components
    BCVIPERViewController * viewController = [[BCVIPERViewController alloc] init];
    BCVIPERPresenter *presenter = [BCVIPERPresenter new];
    BCVIPERInteractor *interactor = [BCVIPERInteractor new];
    BCVIPERDataManager *dataManager = [BCVIPERDataManager new];
    
    // Connecting
    viewController.presenter = presenter;
    
    presenter.view = viewController;
    presenter.wireframe = self;
    presenter.interactor = interactor;
    
    interactor.output = presenter;
    interactor.dataManager = dataManager;
    
    return viewController;
}


#pragma mark - Present/Dismiss

- (void)presentModule
{
    BCVIPERViewController * vc = [self createDependenciesWithPhotoData:photoData];
    [self.rootWireframe.navigationController setViewControllers:@[vc] animated:YES];
}


@end
