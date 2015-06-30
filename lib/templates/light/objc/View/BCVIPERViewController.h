//
//  Created by AUTHOR
//  Copyright (c) YEAR AUTHOR. All rights reserved.
//

@import UIKit;
#import "BCVIPERProtocols.h"

@class BCVIPERPresenter;

@interface BCVIPERViewController : UIViewController <BCVIPERViewProtocol>

@property (nonatomic, strong) BCVIPERPresenter *presenter;

@end
