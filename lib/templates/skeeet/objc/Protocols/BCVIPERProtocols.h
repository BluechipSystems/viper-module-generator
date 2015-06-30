//
// Created by VIPER
// Copyright (c) 2015 VIPER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol BCVIPERInteractorOutputProtocol;
@protocol BCVIPERInteractorInputProtocol;
@protocol BCVIPERViewProtocol;
@protocol BCVIPERPresenterProtocol;
@protocol BCVIPERDataManagerInputProtocol;



//@class BCVIPERWireFrame;
//@protocol BCVIPERWireFrameProtocol
//@required
//+ (void)presentVIPERModuleFrom:(id)fromView;
///**
// * Add here your methods for communication PRESENTER -> WIREFRAME
// */
//@end

@protocol BCVIPERViewProtocol
@required
@property (nonatomic, strong) id <BCVIPERPresenterProtocol> presenter;
/**
 * Add here your methods for communication PRESENTER -> VIEWCONTROLLER
 */
@end



@protocol BCVIPERPresenterProtocol
@required
@property (nonatomic, weak) id <BCVIPERViewProtocol> view;
@property (nonatomic, strong) id <BCVIPERInteractorInputProtocol> interactor;
//@property (nonatomic, strong) id <BCVIPERWireFrameProtocol> wireFrame;
/**
 * Add here your methods for communication VIEWCONTROLLER -> PRESENTER
 */
@end

@protocol BCVIPERInteractorOutputProtocol
/**
 * Add here your methods for communication INTERACTOR -> PRESENTER
 */
@end

@protocol BCVIPERInteractorInputProtocol
@required
@property (nonatomic, weak) id <BCVIPERInteractorOutputProtocol> presenter;
@property (nonatomic, strong) id <BCVIPERDataManagerInputProtocol> localDataManager;
/**
 * Add here your methods for communication PRESENTER -> INTERACTOR
 */
@end


@protocol VIPERDataManagerInputProtocol
/**
 * Add here your methods for communication INTERACTOR -> DATAMANAGER
 */
@end

@protocol BCVIPERDataManagerInputProtocol <VIPERDataManagerInputProtocol>
/**
 * Add here your methods for communication INTERACTOR -> LOCLDATAMANAGER
 */
@end


