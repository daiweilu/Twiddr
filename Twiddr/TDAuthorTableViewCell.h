//
//  TDAuthorTableViewCell.h
//  Twiddr
//
//  Created by Daiwei Lu on 4/29/14.
//  Copyright (c) 2014 Daiwei Lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TDAuthorTableViewCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UILabel *count;
@property (strong, nonatomic) IBOutlet UILabel *Title;
@property (strong, nonatomic) IBOutlet UILabel *Detail;
@property (strong, nonatomic) IBOutlet UIImageView *imageView;

@end
