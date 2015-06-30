//
// Created by AUTHOR
// Copyright (c) 2015 AUTHOR. All rights reserved.
//

@import Foundation;
#import "BCVIPERProtocols.h"



@interface BCVIPERInteractor : NSObject <BCVIPERInteractorInputProtocol>

@property(nonatomic, weak) InjectedProtocol(BCVIPERInteractorOutputProtocol) presenter;
@property(nonatomic, strong) InjectedProtocol(BCVIPERDataManagerInputProtocol) localDataManager;

@end