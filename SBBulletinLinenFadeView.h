/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBBulletinLinenSegmentView, UIImageView;

__attribute__((visibility("hidden")))
@interface SBBulletinLinenFadeView : XXUnknownSuperclass {
	SBBulletinLinenSegmentView* _fadeSegment;
	UIImageView* _fadeOverlayMask;
}
-(void)setGradientAlpha:(float)alpha;
-(void)setFrame:(CGRect)frame;
-(float)fadeHeight;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame linenView:(id)view;
@end
