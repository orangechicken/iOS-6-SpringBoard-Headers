/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface XXUnknownSuperclass (SBApplicationAdditions)
-(void)addObjectsFromDictionary:(id)dictionary forKeys:(id)keys;
@end

@interface XXUnknownSuperclass (SBArrayStackAdditions)
-(id)top;
-(id)popObject:(id)object;
-(id)pop;
-(void)push:(id)push;
@end

@interface XXUnknownSuperclass (Centerable)
-(void)centerToContentView;
@end

@interface XXUnknownSuperclass (CTHelpers)
-(id)callingNamePresentationValue;
-(CFStringRef)settingType;
-(id)mmiProcedure;
-(id)ssServiceType;
-(id)serviceCenterAddress;
-(id)enabledString;
-(id)connectedLinePresentationValue;
-(id)connectedLineIDRestrictionValue;
-(id)callingLinePresentationValue;
-(id)callingLineIDRestrictionValue;
-(id)callBarringFacility;
-(id)callForwardingReason;
-(id)callClass;
@end

@interface XXUnknownSuperclass (PrefsNotifications)
-(id)prefsNotificationsAlertString;
-(id)_alertStringForPref:(id)pref;
-(id)_callingNamePresentationString:(id)string;
-(id)_ssPasswordString:(id)string;
-(id)_serviceCenterAddressString:(id)string;
-(id)_simLockString:(id)string;
-(id)_callingLineIDRestrictionString:(id)string;
-(id)_connectedLineIDRestrictionString:(id)string;
-(id)_callingLinePresentationString:(id)string;
-(id)_connectedLinePresentationString:(id)string;
-(id)_fixedDialingString:(id)string;
-(id)_callBarringString:(id)string;
-(id)_callWaitingString:(id)string;
-(id)_callForwardingString:(id)string;
-(void)addPrefNotification:(id)notification withUserInfo:(id)userInfo;
@end

@interface XXUnknownSuperclass (AlertItemsAdditions)
-(void)addObjectsOfClass:(Class)aClass toArray:(id)array;
-(id)objectOfClass:(Class)aClass;
@end

@interface XXUnknownSuperclass (Formatting)
-(id)IMEI;
-(id)ICCID;
@end

@interface XXUnknownSuperclass (SBIconListNumberOffset)
-(void)setNumberOfPagesWithIconListCount:(int)iconListCount;
-(void)setCurrentPageWithIconListNumber:(int)iconListNumber;
@end

@interface XXUnknownSuperclass (SpringBoardMetadata)
-(id)cachedTitle;
-(BOOL)cachedArtworkIsPrerendered;
-(id)cachedApplicationIdentifier;
-(id)cachedBundleIdentifier;
-(id)cachedSoftwareType;
@end

@interface XXUnknownSuperclass (SBOptimizedCombination)
-(id)dictionaryByAddingEntriesFromDictionary:(id)dictionary;
@end

@interface XXUnknownSuperclass (SBTimeUtilities)
-(BOOL)isBeforeDate:(id)date;
-(BOOL)isAfterDate:(id)date;
@end

@interface XXUnknownSuperclass (SBTimeUtilities)
-(BOOL)isSameYearAsComponents:(id)components;
-(BOOL)isSameMonthAsComponents:(id)components;
-(BOOL)isSameDayAsComponents:(id)components;
@end

@interface XXUnknownSuperclass (SBTimeUtilities)
-(BOOL)date:(id)date isSameYearAsDate:(id)date2;
-(BOOL)date:(id)date isSameDayAsDate:(id)date2;
-(id)_timeOnlyComponentsForDate:(id)date;
-(id)_dateOnlyComponentsForDate:(id)date;
@end

@interface XXUnknownSuperclass (SBSearchView)
-(void)printPinningResponderInfoIfNecessary;
@end

@interface XXUnknownSuperclass (SBTypeSafety)
-(id)objectForKey:(id)key ofClass:(Class)aClass;
@end

@interface XXUnknownSuperclass (SBGraphics)
+(id)sbg_imageFromContextWithSize:(CGSize)size scale:(float)scale type:(int)type data:(id)data drawing:(id)drawing encapsulation:(id)encapsulation;
+(id)sbg_imageFromContextWithSize:(CGSize)size scale:(float)scale type:(int)type data:(id)data drawing:(id)drawing;
+(unsigned long)sbg_bytesNeededForSize:(CGSize)size scale:(float)scale withContextType:(int)contextType;
@end

@interface XXUnknownSuperclass (SBBulletinBanner)
-(void)_setReceivedTime:(id)time;
-(id)_receivedTime;
@end

@interface XXUnknownSuperclass (CompletionSupport)
-(void)_setCompletionBlock:(id)block;
-(id)_completionBlock;
@end

@interface XXUnknownSuperclass (SBIconIndex)
+(id)indexPathWithIconIndex:(unsigned)iconIndex listIndex:(unsigned)index;
+(id)emptyPath;
-(BOOL)isPrefixedByPath:(id)path;
-(id)indexPathWithPrefixPath:(id)prefixPath;
-(id)subpathFromPosition:(unsigned)position;
-(id)_subpathWithRange:(NSRange)range;
@end

@interface XXUnknownSuperclass (SBUtilities)
-(id)initWithBBSound:(id)bbsound;
@end

@interface XXUnknownSuperclass (SBUtilities)
-(id)iconImageWithFormat:(int)format;
@end

@interface XXUnknownSuperclass (SBUtilities)
-(id)sectionIconImageWithFormat:(int)format;
@end

@interface XXUnknownSuperclass (SBBulletinBannerControllerTest)
@property(copy, nonatomic) NSString* bulletinID;
@end

@interface XXUnknownSuperclass (SBAdditions)
-(BOOL)sb_containsEmoji;
-(BOOL)sb_containsNonLatinLikeCharacters;
@end

@interface XXUnknownSuperclass (SBStringDrawing)
-(void)drawWithMetrics:(id)metrics inContext:(CGContextRef)context;
-(id)stringMetricsForFirstLineWidth:(float)firstLineWidth;
@end

@interface XXUnknownSuperclass (SpringBoardAdditions)
-(BOOL)hasActiveKeyboardOnScreen;
@end
