//
//  OTCoreData.h
//  oneTRANSPORT
//
//  Created by Dominic Frazer Imregh on 16/08/2016.
//  Copyright 2016 InterDigital Communications, Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface OTCoreData : NSObject

/**
 * Returns the managed object context for the current thread
 */
- (NSManagedObjectContext *)managedObjectContext;

/**
 * Saves the managed object context for the current thread and merges all saves back to the main thread
 */
- (BOOL)saveContext;

@end
