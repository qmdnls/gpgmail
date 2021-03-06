//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSString;

@interface MCFileTypeInfo : NSObject
{
    unsigned int _osType;	// 8 = 0x8
    NSString *_mimeType;	// 16 = 0x10
    NSString *_pathExtension;	// 24 = 0x18
}

@property(nonatomic) unsigned int osType; // @synthesize osType=_osType;
@property(copy, nonatomic) NSString *pathExtension; // @synthesize pathExtension=_pathExtension;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
//- (void).cxx_destruct;	// IMP=0x0000000000028fe1
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
- (void)getTypeIdentifier:(id *)arg1 withLargestPedigree:(id *)arg2;	// IMP=0x0000000000028bd3
- (void)_getTypeInfoFromFallbackFields:(unsigned long long *)arg1;	// IMP=0x0000000000028a17
- (void)_getTypeInfoBasedOnFields:(unsigned long long *)arg1 inputClass:(const struct __CFString *)arg2 inputValue:(const struct __CFString *)arg3;	// IMP=0x00000000000288f2
- (BOOL)getTypeInfoForDesiredFields:(unsigned long long)arg1;	// IMP=0x0000000000028794
- (id)description;	// IMP=0x000000000002868b

@end

