/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>
#import <Availability2.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateShadowView : UIView {
	BOOL _landscape;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	int _windowType;
#endif
}
// -(id)initWithFrame:(CGRect)frame;
-(void)setLandscape:(BOOL)landscape;
// -(void)drawRect:(CGRect)rect;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(assign, nonatomic) int windowType;
#endif
@end
