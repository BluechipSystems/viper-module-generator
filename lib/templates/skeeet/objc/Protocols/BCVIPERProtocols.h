//
// Created by AUTHOR
// Copyright (c) 2015 AUTHOR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol BCVIPERInteractorOutputProtocol;
@protocol BCVIPERInteractorInputProtocol;
@protocol BCVIPERViewProtocol;
@protocol BCVIPERPresenterProtocol;
@protocol BCVIPERDataManagerInputProtocol;
@protocol BCVIPERDelegate;

@protocol BCLocalDataStore;


@protocol BCVIPERViewProtocol
@required
@property(nonatomic, strong) id <BCVIPERPresenterProtocol> presenter;
/**
 * Add here your methods for communication PRESENTER -> VIEWCONTROLLER
 */
@end



@protocol BCVIPERPresenterProtocol
@required
@property(nonatomic, weak  ) id <BCVIPERViewProtocol> view;
@property(nonatomic, strong) id <BCVIPERInteractorInputProtocol> interactor;
@property(nonatomic, weak  ) id <BCVIPERDelegate> moduleDelegate;

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
@property(nonatomic, weak)   id <BCVIPERInteractorOutputProtocol> presenter;
@property(nonatomic, strong) id <BCVIPERDataManagerInputProtocol> localDataManager;
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

@property(nonatomic, weak) id<BCLocalDataStore> localDataStore;
/**
 * Add here your methods for communication INTERACTOR -> LOCLDATAMANAGER
 */
@end


