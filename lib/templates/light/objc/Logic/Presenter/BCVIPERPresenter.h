//
//  Created by AUTHOR
//  Copyright (c) YEAR AUTHOR. All rights reserved.
//

@import Foundation;
#import "BCVIPERProtocols.h"

@class BCVIPERWireframe;

@interface BCVIPERPresenter : NSObject <BCVIPERInteractorOutputProtocol>

@property (nonatomic, weak) BCVIPERWireframe *wireframe;
@property (nonatomic, weak) id <BCVIPERViewProtocol> viewController;
@property (nonatomic, strong) id <BCVIPERInteractorInputProtocol> interactor;


/** VIEW -> PRESENTER methods */

- (void)updateView;

@end
