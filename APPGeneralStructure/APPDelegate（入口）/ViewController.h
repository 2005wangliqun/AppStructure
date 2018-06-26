//
//  ViewController.h
//  APPGeneralStructure
//
//  Created by user on 2018/2/7.
//  Copyright © 2018年 BigBrotherCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

#pragma mark - Lifecycle

- (instancetype)initWithFoo:(id)foo;
- (void)dealloc;

#pragma mark - View Lifecycle

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;

#pragma mark - Layout

- (void)makeViewConstraints;

#pragma mark - Public Interface

- (void)startFooing;
- (void)stopFooing;

#pragma mark - User Interaction

- (void)foobarButtonTapped;

#pragma mark - XYZFoobarDelegate

- (void)foobar:(UITabBar *)foobar didSomethingWithFoo:(id)object;

#pragma mark - Internal Helpers

- (NSString *)displayNameForFoo:(id *)object;

@end

