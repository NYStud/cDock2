//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAContext;

@interface WVWindowProxy : NSObject
{
    CAContext *_context;
    unsigned int _sid;
    unsigned int _wid;
    unsigned int _widParent;
}

@property(readonly, nonatomic) unsigned int wid; // @synthesize wid=_wid;
- (void).cxx_destruct;
- (id)description;
- (void)hide;
- (void)show;
- (void)dealloc;
- (id)initWithWID:(unsigned int)arg1;

@end
