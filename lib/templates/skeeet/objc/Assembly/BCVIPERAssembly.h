//
// Created by AUTHOR
// Copyright (c) 2015 AUTHOR. All rights reserved.
//

@import UIKit;
@import Foundation;
@import Typhoon;
#import "BCVIPERModule.h"
#import "BCVIPERProtocols.h"


@class BCVIPERPresenter;
@class BCVIPERInteractor;
@class BCVIPERDataManager;
@class BCVIPERView;



@interface BCVIPERAssembly : TyphoonAssembly

-(UIViewController<BCVIPERViewProtocol> *) createVIPERView;

@end

