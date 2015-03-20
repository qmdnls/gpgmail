/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ImportAssistant, NSArray, NSMutableArray, NSString;

@interface Importer : NSObject
{
    ImportAssistant *_delegate;
    NSMutableArray *_importArray;
    NSString *_applicationString;
    NSArray *_importFields;
    BOOL _importCanceled;
}

+ (id)name;
+ (id)explanatoryText;
- (void)dealloc;
- (void)importFinished;
- (void)performImport;
- (id)prepareForImport;
- (void)cleanup;
- (id)creatorCode;
- (id)importFinishedText;
- (id)statusLine;
- (void)sortArray:(id)arg1;
- (void)setImportFields:(id)arg1;
- (id)importFields;
- (void)setImportCanceled:(BOOL)arg1;
- (BOOL)importCanceled;
- (unsigned long long)countOfEnabledItems;
- (void)addItemToImportArray:(id)arg1;
- (void)clearImportArray;
- (id)importArray;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)name;
- (id)init;

@end
