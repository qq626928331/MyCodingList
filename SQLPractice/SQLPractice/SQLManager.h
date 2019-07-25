//
//  SQLManager.h
//  SQLPractice
//
//  Created by dxl on 2019/7/25.
//  Copyright © 2019年 dxl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "sqlite3.h"
#import "StudentModel.h"

@interface SQLManager : NSObject{
    sqlite3 *db;
}

+ (SQLManager *)shareManager;

- (StudentModel *)searchWithIdNum:(StudentModel *)model;

- (int)insert:(StudentModel *)model;

@end
/* SQLManager_h */
