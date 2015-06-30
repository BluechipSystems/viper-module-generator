//
// Created by AUTHOR
// Copyright (c) 2015 AUTHOR. All rights reserved.
//

@import Foundation;
#import "BCVIPERProtocols.h"
#import "BCLocalDataStoreProtocols.h"

@interface BCVIPERDataManager : NSObject <BCVIPERDataManagerInputProtocol>

@property(nonatomic, weak) InjectedProtocol(BCLocalDataStore) localDataStore;

@end