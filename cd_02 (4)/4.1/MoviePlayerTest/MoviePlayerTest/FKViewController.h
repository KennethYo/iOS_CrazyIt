//
//  FKViewController.h
//  MoviePlayerTest
//
//  Created by yeeku on 13-8-7.
//  Copyright (c) 2013年 crazyit.org. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FKViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIView *movieView;
- (IBAction)play:(id)sender;
@end
