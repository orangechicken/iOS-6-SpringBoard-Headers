/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBCompassRecalibrationController : XXUnknownSuperclass {
	NSMutableArray* _assertionPorts;
}
+(id)sharedInstance;
-(void)_clientInvalidated:(CFMachPortRef)invalidated;
-(void)clientRequestedCompassHUD:(unsigned)hud;
-(void)removeHUD;
-(void)showHUD;
-(BOOL)isCompassCalibrationHUDVisible;
-(void)dealloc;
@end
