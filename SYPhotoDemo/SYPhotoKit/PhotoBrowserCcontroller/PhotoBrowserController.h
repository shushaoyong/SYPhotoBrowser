/**************************************************************************
 *
 *  Created by shushaoyong on 2016/10/27.
 *    Copyright © 2016年 踏潮. All rights reserved.
 *
 * 项目名称：浙江踏潮-天目山-h5模版制作软件
 * 版权说明：本软件属浙江踏潮网络科技有限公司所有，在未获得浙江踏潮网络科技有限公司正式授权
 *           情况下，任何企业和个人，不能获取、阅读、安装、传播本软件涉及的任何受知
 *           识产权保护的内容。
 ***************************************************************************/

#import <UIKit/UIKit.h>
#import "PhotoBrowserItem.h"

@interface PhotoBrowserController : UICollectionViewController

/**图片数组*/
@property(nonatomic,strong)NSArray *images;

/**当前的下标*/
@property(nonatomic,assign)NSInteger currentIndex;

/**是否需要 点击图片缩小到原来位置动画*/
@property(nonatomic,assign,getter=isAnimating)BOOL animating;

/**图片的来源视图*/
@property(nonatomic,strong)UIView *sourceView;

/**图片的来源视图显示的图片*/
@property(nonatomic,strong)UIImage *placeImage;

/**展示图片浏览器*/
- (void)show;

@end

@class PhotoBrowserCell;

@protocol PhotoBrowserCellDelegate <NSObject>

@optional
/**
 *  图片被点击了
 *
 *  @param cell      当前cell
 *  @param indexPath 点击的下标
 */
- (void)photoBrowserCellImageClick:(PhotoBrowserCell*)cell indexPath:(NSIndexPath*)indexPath;

@end

@interface PhotoBrowserCell : UICollectionViewCell

/**delegate*/
@property(nonatomic,weak)id<PhotoBrowserCellDelegate>delegate;

/**图片模型*/
@property(nonatomic,strong)PhotoBrowserItem *item;

/**图片*/
@property(nonatomic,strong)UIImageView *imageView;

/**下标*/
@property(nonatomic,strong)NSIndexPath *indexPath;

@end
