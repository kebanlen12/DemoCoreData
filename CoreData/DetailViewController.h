//
//  DetailViewController.h
//  CoreData
//
//  Created by Dai Nguyen on 12/8/15.
//  Copyright © 2015 Dai Nguyen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

