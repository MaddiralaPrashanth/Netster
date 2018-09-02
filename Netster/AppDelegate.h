//
//  AppDelegate.h
//  Netster
//
//  Created by DAVID PRASHANTH on 02/09/18.
//  Copyright © 2018 DAVID PRASHANTH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

