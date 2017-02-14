//
//  ViewController.h
//  Juny_SelectPhoto
//
//  Created by 宋俊红 on 16/12/23.
//  Copyright © 2016年 Juny_song. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    
}
@property (weak, nonatomic) IBOutlet UIButton *button;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)openAlbumBtnClick:(UIButton *)sender;
- (IBAction)openCamaraBtonClick:(UIButton *)sender;

@end

