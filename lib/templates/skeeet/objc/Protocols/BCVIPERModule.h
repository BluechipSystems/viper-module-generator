//
// Created by VIPER
// Copyright (c) 2015 VIPER. All rights reserved.
//

@import Foundation;
@import UIKit;
#import "BCContactsPickerProtocols.h"

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



