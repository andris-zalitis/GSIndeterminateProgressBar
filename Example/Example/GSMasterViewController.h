//
//  GSMasterViewController.h
//  Example
//
//  Created by Endika Gutiérrez Salas on 27/05/14.
//  Copyright (c) 2014 Endika Gutiérrez Salas. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GSIndeterminateProgressView.h"

@interface GSMasterViewController : UIViewController

@property (nonatomic, weak) IBOutlet GSIndeterminateProgressView *storyboardProgressView;

- (IBAction)startAnimationgAction:(id)sender;

- (IBAction)stopAnimationgAction:(id)sender;

@end
