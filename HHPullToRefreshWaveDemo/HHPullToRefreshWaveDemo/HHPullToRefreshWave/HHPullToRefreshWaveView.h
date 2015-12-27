//
//  HHPullToRefrshWaveView.h
//  HHPullToRefreshWaveView
//
//  Created by Herui on 15/12/24.
//  Copyright © 2015年 harry. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface HHPullToRefreshWaveView : UIView

@property (nonatomic, copy) void (^actionHandler)();
@property (nonatomic, strong)   UIColor *topWaveColor;
@property (nonatomic, strong)   UIColor *bottomWaveColor;

- (void)invalidateWave;
- (void)observeScrollView:(UIScrollView *)scrollView;
- (void)removeObserverScrollView:(UIScrollView *)scrollView;


@end