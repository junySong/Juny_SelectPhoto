//
//  AppDelegate.h
//  Juny_SelectPhoto
//
//  Created by 宋俊红 on 16/12/23.
//  Copyright © 2016年 Juny_song. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

