/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBIconListPageControlDelegate;

__attribute__((visibility("hidden")))
@interface SBIconListPageControl : XXUnknownSuperclass {
	id _delegate;
}
@property(assign, nonatomic) id<SBIconListPageControlDelegate> delegate;
-(void)setFrame:(CGRect)frame;
-(id)_pageIndicatorCurrentImageForPage:(int)page;
-(id)_pageIndicatorImageForPage:(int)page;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
@end
