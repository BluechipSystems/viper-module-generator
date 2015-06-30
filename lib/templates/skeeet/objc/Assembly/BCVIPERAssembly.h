//
// Created by VIPER
// Copyright (c) 2015 VIPER. All rights reserved.
//

@import UIKit;
@import Foundation;
@import Typhoon;
#import "BCVIPERModule.h"

@class BCVIPERPresenter;
@class BCVIPERInteractor;
@class BCVIPERDataManager;
@class BCVIPERView;
//@class BCVIPERWireframe;

#import "BCVIPERProtocols.h"

@interface BCVIPERAssembly : TyphoonAssembly <BCVIPERModuleInterface>

-(UIViewController<BCVIPERViewProtocol> *) createVIPERView;

@end

