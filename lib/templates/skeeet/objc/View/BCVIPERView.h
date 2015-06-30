//
//  BCVIPERView.h
//  ShareLock
//
//  Created by Aleksei Shevchenko on 6/29/15.
//  Copyright (c) 2015 Blue Chip Systems. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BCVIPERProtocols.h"

@interface BCVIPERView : UIViewController <BCVIPERViewProtocol>

@property (nonatomic, strong) id <BCVIPERPresenterProtocol> presenter;

@end
