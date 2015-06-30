//
//  Created by AUTHOR
//  Copyright (c) YEAR AUTHOR. All rights reserved.
//

@import Foundation;
@import UIKit;

@class BCRootWireframe;
@class BCLocalDataStore;

@interface BCVIPERWireframe : NSObject

@property (nonatomic, weak  ) BCRootWireframe   *rootWireframe;
@property (nonatomic, weak  ) BCLocalDataStore  *localDataStore;


- (void)presentModule;

@end
