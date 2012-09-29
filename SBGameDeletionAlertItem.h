/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlertItem.h"

#import "UIAlertViewDelegate-Protocol.h"

@class SBUserInstalledApplicationIcon;

@interface SBGameDeletionAlertItem : SBAlertItem <UIAlertViewDelegate>
{
    SBUserInstalledApplicationIcon *_icon;
}

- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)initWithIcon:(id)arg1;

@end

