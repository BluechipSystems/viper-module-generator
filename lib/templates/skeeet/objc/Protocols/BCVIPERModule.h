//
// Created by AUTHOR
// Copyright (c) 2015 AUTHOR. All rights reserved.
//

@import Foundation;
@import UIKit;
#import "BCVIPERProtocols.h"

/**
 *  Public interface for BCVIPERModule
 */
@protocol BCVIPERModuleInterface <NSObject>
-(UIViewController<BCVIPERViewProtocol> *) createVIPERView;

@end

/**
 *  Communication between BCVIPERModule and other modules
 */
@protocol BCVIPERDelegate <NSObject>

@end



