//
//  WNXStage03HeaderView.h
//  Hardest
//
//  Created by MacBook on 16/3/27.
//  Copyright © 2016年 维尼的小熊. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WNXStage03HeaderView : UIView

- (void)startWithFailBlock:(void (^)(void))failBlock stopCalculateTime:(void (^)(void))stopCalculateTime;

- (void)leftBtnClick;

- (void)rightBtnClick;

- (void)pause;
- (void)resumed;

@end
