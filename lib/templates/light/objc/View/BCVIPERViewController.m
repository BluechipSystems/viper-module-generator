//
//  Created by AUTHOR
//  Copyright (c) YEAR AUTHOR. All rights reserved.
//

#import "BCVIPERViewController.h"
#import "BCVIPERPresenter.h"

@interface BCVIPERViewController()

@end


@implementation BCVIPERViewController


#pragma mark - ViewController Lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    [self.presenter updateView];
    
}

#pragma mark - View protocol methods

/** PRESENTER -> VIEW methods */


#pragma mark - IB Actions

/**
 * Connect interface builder actions here and pass them to the Presenter
 */

@end