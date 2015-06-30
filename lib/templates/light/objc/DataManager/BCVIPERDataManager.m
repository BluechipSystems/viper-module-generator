//
//  Created by AUTHOR
//  Copyright (c) YEAR AUTHOR. All rights reserved.
//

#import "BCVIPERDataManager.h"

@interface BCVIPERDataManager ()

@property(strong, nonatomic) YapDatabaseConnection * dbConnection;

@end

@implementation BCVIPERDataManager

-(YapDatabaseConnection *)dbConnection
{
    if(!_dbConnection) _dbConnection= [self.localDataStore createNewDatabaseConnection];
    return _dbConnection;
}

@end