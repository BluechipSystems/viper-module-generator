//
// Created by VIPER
// Copyright (c) 2015 VIPER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCVIPERProtocols.h"


@interface BCVIPERInteractor : NSObject <BCVIPERInteractorInputProtocol>

@property (nonatomic, weak) id <BCVIPERInteractorOutputProtocol> presenter;
@property (nonatomic, strong) id <BCVIPERDataManagerInputProtocol> localDataManager;

@end