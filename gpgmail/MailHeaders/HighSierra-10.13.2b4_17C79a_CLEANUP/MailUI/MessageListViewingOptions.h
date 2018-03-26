//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MFMailbox, MessageSortOrder, NSArray, NSDictionary;

@interface MessageListViewingOptions : NSObject
{
    BOOL _organizeByConversation;
    BOOL _filterEnabled;
    MFMailbox *_mailbox;
    MessageSortOrder *_primarySortOrder;
    NSDictionary *_mailboxViewingState;
    NSArray *_filterDictionaryRepresentations;
}

@property(copy, nonatomic) NSArray *filterDictionaryRepresentations; // @synthesize filterDictionaryRepresentations=_filterDictionaryRepresentations;
@property(nonatomic) BOOL filterEnabled; // @synthesize filterEnabled=_filterEnabled;
@property(copy, nonatomic) NSDictionary *mailboxViewingState; // @synthesize mailboxViewingState=_mailboxViewingState;
@property(copy, nonatomic) MessageSortOrder *primarySortOrder; // @synthesize primarySortOrder=_primarySortOrder;
@property(nonatomic) BOOL organizeByConversation; // @synthesize organizeByConversation=_organizeByConversation;
@property(readonly, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
//- (void).cxx_destruct;
- (void)save;
- (id)init;
- (id)initWithMailbox:(id)arg1;

@end
