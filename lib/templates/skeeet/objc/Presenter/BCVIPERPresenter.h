//
// Created by VIPER
// Copyright (c) 2015 VIPER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCVIPERProtocols.h"

@protocol BCShareLockNavigator;
//@class BCVIPERWireFrame;

@interface BCVIPERPresenter : NSObject <BCVIPERPresenterProtocol, BCVIPERInteractorOutputProtocol>

@property (nonatomic, weak) id <BCVIPERViewProtocol> view;
@property (nonatomic, strong) id <BCVIPERInteractorInputProtocol> interactor;
@property (nonatomic, weak) InjectedProtocol(BCShareLockNavigator) navigator;

//@property (nonatomic, strong) id <BCVIPERWireFrameProtocol> wireFrame;

@end
