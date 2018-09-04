//
//  DetailViewController.h
//  DecorateHouseBudget
//
//  Created by 李辉 on 2018/9/4.
//  Copyright © 2018年 李辉. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

