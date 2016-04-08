//
//  HUScrollAndPageView.h
//  test
//
//  Created by imac on 15/9/27.
//  Copyright (c) 2015年 imac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HUScrollAndPageView : UIView

{
    __unsafe_unretained id  _delegate;
}

@property (nonatomic, assign) id  delegate;

@property (nonatomic, assign) NSInteger currentPage;

/**
 *  uiimagViewAcc组
 */
@property (nonatomic, strong) NSMutableArray *imageViewAry;

@property (nonatomic, readonly) UIScrollView *scrollView;

@property (nonatomic, readonly) UIPageControl *pageControl;



@property (nonatomic, strong) UIColor *pageCtrlNormalColor;
@property (nonatomic, strong) UIColor *pageCtrlSelectedColor;



//是否开启自动变换
/**
 *  是否开启自动播放
 *
 *  @param shouldStart BOOL
 */
-(void)shouldAutoShow:(BOOL)shouldStart;

@end


@protocol HUcrollViewViewDelegate

@optional
/**
 *  点击代理事件
 *
 *  @param view
 *  @param index
 */
- (void)didClickPage:(HUScrollAndPageView *)view atIndex:(NSInteger)index;

@end





