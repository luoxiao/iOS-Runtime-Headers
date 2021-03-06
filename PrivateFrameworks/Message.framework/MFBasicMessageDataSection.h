/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection> {
    bool  _complete;
    MFDataHolder * _dataHolder;
    NSString * _partName;
    bool  _partial;
}

@property (getter=isComplete, nonatomic) bool complete;
@property (nonatomic, retain) MFDataHolder *dataHolder;
@property (nonatomic, retain) NSString *partName;
@property (getter=isPartial, nonatomic) bool partial;

- (id)dataHolder;
- (void)dealloc;
- (bool)isComplete;
- (bool)isPartial;
- (id)partName;
- (void)setComplete:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setDataHolder:(id)arg1;
- (void)setPartName:(id)arg1;
- (void)setPartial:(bool)arg1;

@end
