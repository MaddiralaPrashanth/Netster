//
//  DetailViewController.h
//  Netster
//
//  Created by DAVID PRASHANTH on 02/09/18.
//  Copyright © 2018 DAVID PRASHANTH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Netster+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

