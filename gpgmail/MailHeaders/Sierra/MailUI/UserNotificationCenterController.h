//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSUserNotificationCenterDelegate.h"

@class MFMailbox, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;

@interface UserNotificationCenterController : NSObject <NSUserNotificationCenterDelegate>
{
    MFMailbox *_userNotificationMailbox;	// 8 = 0x8
    NSMutableSet *_messagesNeedingSnippets;	// 16 = 0x10
    NSMutableSet *_postUserNotificationOperations;	// 24 = 0x18
    NSMutableSet *_messagesSentBySelf;	// 32 = 0x20
    NSMutableSet *_forcedNotificationMessageIDs;	// 40 = 0x28
    NSMutableArray *_mostRecentMessageDates;	// 48 = 0x30
    id _playSoundLock;	// 56 = 0x38
    BOOL _needToPlayNewMailSound;	// 64 = 0x40
    BOOL _isRichList;	// 65 = 0x41
    long long _userNotificationScope;	// 72 = 0x48
    NSOperationQueue *_operationQueue;	// 80 = 0x50
    unsigned long long _numberOfSnippetLines;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x00000001000508a1
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010031112b
+ (id)log;	// IMP=0x0000000100310dd8
@property(nonatomic) unsigned long long numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
@property(nonatomic) BOOL isRichList; // @synthesize isRichList=_isRichList;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) long long userNotificationScope; // @synthesize userNotificationScope=_userNotificationScope;
- (void).cxx_destruct;	// IMP=0x0000000100314686
- (BOOL)_shouldSendUserNotificationForMessage:(id)arg1 inMailbox:(id)arg2;	// IMP=0x000000010007f580
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;	// IMP=0x00000001003145e2
- (void)userNotificationCenter:(id)arg1 didDismissAlert:(id)arg2;	// IMP=0x0000000100313e9a
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;	// IMP=0x00000001003137e5
- (BOOL)userNotificationCenter:(id)arg1 shouldActivateForNotification:(id)arg2;	// IMP=0x00000001003137c5
- (void)setUserNotificationScope:(long long)arg1 mailbox:(id)arg2;	// IMP=0x000000010031366d
- (void)_deleteUserNotificationWithMessages:(id)arg1;	// IMP=0x0000000100312e2c
- (void)_mailAccountsChanged:(id)arg1;	// IMP=0x00000001003125a1
- (void)_viewerLayoutPreferenceChanged:(id)arg1;	// IMP=0x0000000100312537
- (void)_messagesWereReadOrDeleted:(id)arg1;	// IMP=0x0000000100085a42
- (void)_postUserNotificationForMessages:(id)arg1 withSnippets:(id)arg2;	// IMP=0x0000000100312125
- (void)_messageSnippetsUpdated:(id)arg1;	// IMP=0x0000000100086418
- (id)_snippetsForMessages:(id)arg1;	// IMP=0x0000000100311c0c
- (void)_ruleWasMatched:(id)arg1;	// IMP=0x0000000100311906
- (BOOL)_shouldGetSnippetForMessage:(id)arg1;	// IMP=0x000000010031172a
- (void)_playNewMailSoundIfNeeded;	// IMP=0x000000010031161c
- (void)_messagesWereAdded:(id)arg1;	// IMP=0x000000010005af5f
- (void)_newMailReceived:(id)arg1;	// IMP=0x000000010031157e
- (void)_snippetLinePreferenceChanged:(id)arg1;	// IMP=0x000000010031150d
- (void)_setUserNotificationMailbox:(id)arg1;	// IMP=0x00000001003114bc
@property(readonly, nonatomic) MFMailbox *userNotificationMailbox;
- (void)_mailboxWillBeInvalidated:(id)arg1;	// IMP=0x000000010009d59a
- (void)_clearNotificationsForDeletedAccounts;	// IMP=0x0000000100051007
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001003111f4
- (void)dealloc;	// IMP=0x0000000100310e56
- (id)init;	// IMP=0x0000000100050a0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

