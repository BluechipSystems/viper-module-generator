//
//  Created by AUTHOR
//  Copyright (c) YEAR AUTHOR. All rights reserved.
//

@import Foundation;
#import "BCVIPERProtocols.h"

@class BCVIPERDataManager;

@interface BCVIPERInteractor : NSObject <BCVIPERInteractorInputProtocol>

@property (nonatomic, weak) id <BCVIPERInteractorOutputProtocol> presenter;
@property (nonatomic, strong) BCVIPERDataManager *dataManager;

@end