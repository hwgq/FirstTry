//
//  DetailViewController.h
//  MyGitFirstTry
//
//  Created by HuangGuoQing on 15/12/17.
//  Copyright © 2015年 HJL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

