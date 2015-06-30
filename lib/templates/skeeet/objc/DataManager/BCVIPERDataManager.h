//
// Created by VIPER
// Copyright (c) 2015 VIPER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCVIPERProtocols.h"
#import "BCLocalDataStoreProtocols.h"

@interface BCVIPERDataManager : NSObject <BCVIPERDataManagerInputProtocol>

@property (nonatomic, weak) InjectedProtocol(BCLocalDataStore) localDataStore;

@end