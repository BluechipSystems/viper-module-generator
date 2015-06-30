//
// Created by VIPER
// Copyright (c) 2015 VIPER. All rights reserved.
//

#import "BCVIPERWireFrame.h"

@implementation BCVIPERWireFrame

+ (void)presentVIPERModuleFrom:(UIViewController*)fromViewController
{
    // Generating module components
    id <BCVIPERViewProtocol> view = [[BCVIPERView alloc] init];
    id <BCVIPERPresenterProtocol, BCVIPERInteractorOutputProtocol> presenter = [BCVIPERPresenter new];
    id <BCVIPERInteractorInputProtocol> interactor = [BCVIPERInteractor new];
    id <BCVIPERDataManagerInputProtocol> localDataManager = [BCVIPERDataManager new];
    id <BCVIPERWireFrameProtocol> wireFrame= [BCVIPERWireFrame new];
    
    // Connecting
    view.presenter = presenter;
    presenter.view = view;
    presenter.wireFrame = wireFrame;
    presenter.interactor = interactor;
    interactor.presenter = presenter;
    interactor.localDataManager = localDataManager;
    
    //TODO - New view controller presentation (present, push, pop, .. )
}

@end
