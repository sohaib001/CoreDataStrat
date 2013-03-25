//
//  AppDelegate.h
//  CoreDataStrat
//
//  Created by Sohaib Muhammad on 25/03/2013.
//  Copyright (c) 2013 coeus. All rights reserved.
//  This is a sample project in which i m doing simple things like a storybord in the existing project and also add a coredata in the existing project..

//  For add storyboard u simple add a storyboard file and also add a key in .plist file with respective storyboard name without extensions....
//  Steps for adding coreData in existing project.
//  1. import <CoreData/CoreData.h> in .pch file for global access.
//  2. 


#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic, readonly) NSManagedObjectContext  *managedObjectContext;
@property (strong, nonatomic, readonly) NSManagedObjectModel  *managedObjectModel;
@property (strong, nonatomic, readonly)  NSPersistentStoreCoordinator *persistentStoreCoordinator;
- (NSURL *)applicationDocumentsDirectory;
- (void)saveContext;

@end
