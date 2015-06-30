//
// Created by AUTHOR
// Copyright (c) 2015 AUTHOR. All rights reserved.
//

@import Foundation;
#import "BCVIPERProtocols.h"
#import "BCVIPERModule.h"

@protocol BCShareLockNavigator;

@interface BCVIPERPresenter : NSObject
<BCVIPERPresenterProtocol, BCVIPERInteractorOutputProtocol>

@property(nonatomic, weak)   InjectedProtocol(BCVIPERViewProtocol) view;
@property(nonatomic, strong) InjectedProtocol(BCVIPERInteractorInputProtocol) interactor;
@property(nonatomic, weak)   InjectedProtocol(BCShareLockNavigator) navigator;

@property(nonatomic, weak)   id<BCVIPERDelegate> moduleDelegate;


@end
