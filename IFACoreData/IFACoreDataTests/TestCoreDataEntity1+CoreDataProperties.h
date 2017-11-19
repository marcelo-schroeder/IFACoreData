//
//  TestCoreDataEntity1+CoreDataProperties.h
//  IFACoreUI
//
//  Created by Marcelo Schroeder on 4/3/17.
//  Copyright © 2017 InfoAccent Pty Ltd. All rights reserved.
//

#import "TestCoreDataEntity1+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface TestCoreDataEntity1 (CoreDataProperties)

+ (NSFetchRequest<TestCoreDataEntity1 *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *attribute1;
@property (nullable, nonatomic, copy) NSNumber *attribute2;

@end

NS_ASSUME_NONNULL_END
