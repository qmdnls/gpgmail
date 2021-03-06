//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "AccountStatusDataSourceDelegate-Protocol.h"
#import "MUIAddressFieldContextProvider-Protocol.h"
#import "MUIAddressFieldSenderAddressHandler-Protocol.h"
//#import "NSStackViewDelegate.h"
//#import "NSUserInterfaceValidations.h"

@class ComposeHeaderRowView, ComposeViewController, MUIAddressField, NSArray, NSButtonCell, NSMenu, NSMutableArray, NSPopUpButton, NSSegmentedControl, NSStackView, NSString, NSTextField, NSView;

@interface HeadersEditor : NSObject <MUIAddressFieldSenderAddressHandler, MUIAddressFieldContextProvider, AccountStatusDataSourceDelegate, NSStackViewDelegate, NSUserInterfaceValidations>
{
    NSMutableArray *_accessoryViewOwners;	// 8 = 0x8
    BOOL _hasChanges;	// 16 = 0x10
    BOOL _messageIsToBeSigned;	// 17 = 0x11
    BOOL _messageIsToBeEncrypted;	// 18 = 0x12
    BOOL _canSign;	// 19 = 0x13
    BOOL _canEncrypt;	// 20 = 0x14
    BOOL _hasFromAddressBeenManuallyChanged;	// 21 = 0x15
    ComposeViewController *_composeViewController;	// 24 = 0x18
    MUIAddressField *_toField;	// 32 = 0x20
    MUIAddressField *_ccField;	// 40 = 0x28
    MUIAddressField *_bccField;	// 48 = 0x30
    MUIAddressField *_replyToField;	// 56 = 0x38
    NSTextField *_subjectField;	// 64 = 0x40
    NSTextField *_toTitle;	// 72 = 0x48
    NSTextField *_ccTitle;	// 80 = 0x50
    NSTextField *_bccTitle;	// 88 = 0x58
    NSTextField *_replyToTitle;	// 96 = 0x60
    NSTextField *_subjectTitle;	// 104 = 0x68
    NSTextField *_fromLabel;	// 112 = 0x70
    NSPopUpButton *_fromPopup;	// 120 = 0x78
    NSTextField *_signatureLabel;	// 128 = 0x80
    NSPopUpButton *_signaturePopup;	// 136 = 0x88
    NSPopUpButton *_priorityPopup;	// 144 = 0x90
    NSView *_signBlock;	// 152 = 0x98
    NSSegmentedControl *_signButton;	// 160 = 0xa0
    NSSegmentedControl *_encryptButton;	// 168 = 0xa8
    NSStackView *_contentStack;	// 176 = 0xb0
    ComposeHeaderRowView *_ccRow;	// 184 = 0xb8
    ComposeHeaderRowView *_bccRow;	// 192 = 0xc0
    ComposeHeaderRowView *_replyToRow;	// 200 = 0xc8
    NSStackView *_subjectStack;	// 208 = 0xd0
    ComposeHeaderRowView *_fromRow;	// 216 = 0xd8
    NSStackView *_fromStack;	// 224 = 0xe0
    ComposeHeaderRowView *_statusRow;	// 232 = 0xe8
    NSMenu *_disclosureMenu;	// 240 = 0xf0
    NSButtonCell *_encryptCell;	// 248 = 0xf8
    NSButtonCell *_signCell;	// 256 = 0x100
}

@property(nonatomic) BOOL hasFromAddressBeenManuallyChanged; // @synthesize hasFromAddressBeenManuallyChanged=_hasFromAddressBeenManuallyChanged;
@property(nonatomic) BOOL canEncrypt; // @synthesize canEncrypt=_canEncrypt;
@property(nonatomic) BOOL canSign; // @synthesize canSign=_canSign;
@property(nonatomic) __weak NSButtonCell *signCell; // @synthesize signCell=_signCell;
@property(nonatomic) __weak NSButtonCell *encryptCell; // @synthesize encryptCell=_encryptCell;
@property(retain, nonatomic) NSMenu *disclosureMenu; // @synthesize disclosureMenu=_disclosureMenu;
@property(nonatomic) __weak ComposeHeaderRowView *statusRow; // @synthesize statusRow=_statusRow;
@property(nonatomic) __weak NSStackView *fromStack; // @synthesize fromStack=_fromStack;
@property(nonatomic) __weak ComposeHeaderRowView *fromRow; // @synthesize fromRow=_fromRow;
@property(nonatomic) __weak NSStackView *subjectStack; // @synthesize subjectStack=_subjectStack;
@property(nonatomic) __weak ComposeHeaderRowView *replyToRow; // @synthesize replyToRow=_replyToRow;
@property(nonatomic) __weak ComposeHeaderRowView *bccRow; // @synthesize bccRow=_bccRow;
@property(nonatomic) __weak ComposeHeaderRowView *ccRow; // @synthesize ccRow=_ccRow;
@property(nonatomic) __weak NSStackView *contentStack; // @synthesize contentStack=_contentStack;
@property(nonatomic) __weak NSSegmentedControl *encryptButton; // @synthesize encryptButton=_encryptButton;
@property(nonatomic) __weak NSSegmentedControl *signButton; // @synthesize signButton=_signButton;
@property(nonatomic) __weak NSView *signBlock; // @synthesize signBlock=_signBlock;
@property(nonatomic) __weak NSPopUpButton *priorityPopup; // @synthesize priorityPopup=_priorityPopup;
@property(nonatomic) __weak NSPopUpButton *signaturePopup; // @synthesize signaturePopup=_signaturePopup;
@property(nonatomic) __weak NSTextField *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
@property(nonatomic) __weak NSPopUpButton *fromPopup; // @synthesize fromPopup=_fromPopup;
@property(nonatomic) __weak NSTextField *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(nonatomic) __weak NSTextField *subjectTitle; // @synthesize subjectTitle=_subjectTitle;
@property(nonatomic) __weak NSTextField *replyToTitle; // @synthesize replyToTitle=_replyToTitle;
@property(nonatomic) __weak NSTextField *bccTitle; // @synthesize bccTitle=_bccTitle;
@property(nonatomic) __weak NSTextField *ccTitle; // @synthesize ccTitle=_ccTitle;
@property(nonatomic) __weak NSTextField *toTitle; // @synthesize toTitle=_toTitle;
@property(nonatomic) __weak NSTextField *subjectField; // @synthesize subjectField=_subjectField;
@property(retain, nonatomic) MUIAddressField *replyToField; // @synthesize replyToField=_replyToField;
@property(retain, nonatomic) MUIAddressField *bccField; // @synthesize bccField=_bccField;
@property(retain, nonatomic) MUIAddressField *ccField; // @synthesize ccField=_ccField;
@property(retain, nonatomic) MUIAddressField *toField; // @synthesize toField=_toField;
@property(nonatomic) BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
@property(nonatomic) __weak ComposeViewController *composeViewController; // @synthesize composeViewController=_composeViewController;
//- (void).cxx_destruct;	// IMP=0x0000000100195217
@property(readonly, nonatomic) NSArray *allHeaderAddresses;
- (void)_selectFromAddressAtIndex:(long long)arg1;	// IMP=0x0000000100194bc1
- (void)validateDomain:(id)arg1;	// IMP=0x000000010019482d
- (BOOL)validateSenderAddress:(id)arg1;	// IMP=0x00000001001944aa
- (BOOL)validateMenuItem:(id)arg1;	// IMP=0x0000000100078f6e
- (BOOL)validateUserInterfaceItem:(id)arg1;	// IMP=0x0000000100079052
- (void)_updateSignButton;	// IMP=0x00000001001943cc
@property(nonatomic) BOOL messageIsToBeSigned; // @synthesize messageIsToBeSigned=_messageIsToBeSigned;
- (void)_updateEncryptButton;	// IMP=0x00000001001942bf
@property(nonatomic) BOOL messageIsToBeEncrypted; // @synthesize messageIsToBeEncrypted=_messageIsToBeEncrypted;
- (void)prepareToCloseWindow;	// IMP=0x0000000100074e88
- (id)_newContentsForClearedField:(id)arg1;	// IMP=0x0000000100193f93
- (void)_clearField:(id)arg1;	// IMP=0x0000000100193f11
- (void)changeSignature:(id)arg1;	// IMP=0x000000010006cd92
- (void)editSignatures:(id)arg1;	// IMP=0x0000000100193d35
- (void)_toggleEncryption;	// IMP=0x00000001001938e4
- (void)securityControlChanged:(id)arg1;	// IMP=0x00000001001937a2
- (void)setMessagePriority:(id)arg1;	// IMP=0x00000001001935ab
- (void)_updateBackEndSender:(id)arg1;	// IMP=0x0000000100193418
- (void)changeFromHeader:(id)arg1;	// IMP=0x000000010019338b
- (void)_changeHeaderField:(id)arg1;	// IMP=0x00000001001931ad
- (id)mailAccount;	// IMP=0x000000010005fd95
- (void)toggleAccountLock:(id)arg1;	// IMP=0x0000000100192d27
- (void)editServerList:(id)arg1 selectedAccount:(id)arg2;	// IMP=0x0000000100192d0b
- (BOOL)isOkayToSaveMessage:(id)arg1;	// IMP=0x000000010007eca7
@property(readonly, nonatomic) BOOL messageHasRecipients;
- (void)changeSignatureFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000010006d9e0
- (void)setCheckGrammarWithSpelling:(BOOL)arg1;	// IMP=0x0000000100067dec
- (void)setInlineSpellCheckingEnabled:(BOOL)arg1;	// IMP=0x0000000100067c9b
- (void)appendAddressesForToHeader:(id)arg1;	// IMP=0x0000000100192c19
- (void)setHeaders:(id)arg1;	// IMP=0x0000000100192b64
- (BOOL)_headerFieldIsEmpty:(id)arg1;	// IMP=0x0000000100192a31
- (void)_subjectChanged;	// IMP=0x0000000100063e54
- (void)loadHeadersFromBackEnd:(id)arg1;	// IMP=0x000000010006337c
- (id)_headerKeyForView:(id)arg1;	// IMP=0x0000000100063c17
- (BOOL)_populateField:(id)arg1 withAddressesForKey:(id)arg2;	// IMP=0x0000000100192943
- (void)_setupAddressField:(id)arg1;	// IMP=0x0000000100061b57
- (void)setInitialFirstResponder;	// IMP=0x0000000100192752
- (BOOL)_alwaysBCCMyself;	// IMP=0x00000001001926ff
- (BOOL)_alwaysCCMyself;	// IMP=0x00000001001926ac
- (void)_updateCcOrBccMyselfFieldWithSender:(id)arg1 oldSender:(id)arg2;	// IMP=0x0000000100192383
- (void)_updateSenderDomainAndAddressWithSender:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x0000000100192067
- (void)_updateSignatureControlOverridingExistingSignature:(id)arg1;	// IMP=0x0000000100191c85
- (void)_updateSignatureControl;	// IMP=0x0000000100191c30
- (void)_updateFromControl;	// IMP=0x000000010019126b
- (id)_fromDisplayAddressFromFullAddress:(id)arg1;	// IMP=0x00000001001910f2
- (BOOL)_shouldShowFromView;	// IMP=0x0000000100191059
- (void)_updateSecurityControls;	// IMP=0x0000000100190cc7
- (void)_updatePriorityPopUp;	// IMP=0x0000000100190b69
- (void)controlTextDidChange:(id)arg1;	// IMP=0x0000000100190b57
- (void)controlTextDidEndEditing:(id)arg1;	// IMP=0x0000000100190a01
- (void)controlTextDidBeginEditing:(id)arg1;	// IMP=0x0000000100190919
- (void)_webViewDidLoadStationery:(id)arg1;	// IMP=0x000000010019087f
- (void)_accountInfoDidChange:(id)arg1;	// IMP=0x0000000100190721
- (void)_mailAccountsDidChange:(id)arg1;	// IMP=0x00000001001906af
- (void)_composePreferencesChanged:(id)arg1;	// IMP=0x0000000100190650
- (void)_signaturePreferencesChanged:(id)arg1;	// IMP=0x00000001001905f1
- (void)_emailAliasesDidChange:(id)arg1;	// IMP=0x0000000100190592
- (void)configureButtonsAndPopUps;	// IMP=0x0000000100066904
- (double)_rowAnimationDuration;	// IMP=0x00000001001904b5
- (void)_animateHeaderRow:(id)arg1 toVisible:(BOOL)arg2;	// IMP=0x000000010018fad0
- (void)_setHeaderRow:(id)arg1 toVisible:(BOOL)arg2 animate:(BOOL)arg3;	// IMP=0x000000010018f874
- (void)_setVisibilityForEncryptionAndSigning:(BOOL)arg1;	// IMP=0x000000010018f7de
- (void)_setVisibilityForSignatureView:(BOOL)arg1;	// IMP=0x000000010018f61a
- (void)_setVisibilityForFromView:(BOOL)arg1;	// IMP=0x000000010018f456
- (void)_setVisibilityForPriorityControl:(BOOL)arg1;	// IMP=0x000000010018f3c0
- (void)setAllHeaderFieldsToEnabled:(BOOL)arg1;	// IMP=0x000000010018f093
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100063752
- (void)awakeFromNib;	// IMP=0x00000001000604f1
- (void)dealloc;	// IMP=0x00000001000755ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

