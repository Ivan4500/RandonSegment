#pragma once
#include "STRUCTS.H"

#ifndef RandNumber
#define RandNumber MyRand
#endif

#define INIT_LIST_OF_COORDS_POINTS(_Begin, _End, COORDS_POINT_LIST, _STEP_, ___ABS___, _SIZE_T_, _PUSH_BACK_, _CLEAR_) COORDS_POINT_LIST._CLEAR_(); \
COORDS_POINT_LIST._PUSH_BACK_(_Begin); \
_SIZE_T_ k = (_SIZE_T_)((___ABS___(_End - _Begin)) / _STEP_); \
_For (_SIZE_T_ i = 0; i < k; i++) \
{ \
	COORDS_POINT_LIST._PUSH_BACK_(COORDS_POINT_LIST[i] + _STEP_); \
}

#define _GENERATE_RANDOM_SEGMENT(COORDS_POINT_LIST, COORDS_SEGMENT_LIST, _RAND_NUM_, _SEGM_LENGTH_,___ABS___, _SIZE_T_, _LIST_SIZE_, _CLEAR_, _PUSH_BACK_, _ERASE_) 	_SIZE_T_ NumberOfNewSegm = _RAND_NUM_(); \
COORDS_SEGMENT_LIST._PUSH_BACK_(COORDS_POINT_LIST[NumberOfNewSegm%(COORDS_POINT_LIST._LIST_SIZE_())]); \
_SIZE_T_ i = 0; \
_While (i < COORDS_POINT_LIST._LIST_SIZE_()) \
{ \
	_If (___ABS___(COORDS_POINT_LIST[i] - COORDS_SEGMENT_LIST[COORDS_SEGMENT_LIST._LIST_SIZE_() - 1]) < _SEGM_LENGTH_) \
	{ \
		_ERASE_(COORDS_POINT_LIST, i); \
	} \
	_Else \
	{ \
		i++; \
	} \
} \
_Return(COORDS_POINT_LIST._LIST_SIZE_() != 0); \

#define _GENERATE_RANDOM_SEGMENT_1(_COORDS_SEGMENT_LIST_, _TYPE_USING_NUMBER_,_STEP_, _RAND_NUM_, _FREE_SPACE_, _SEGM_BEGIN_, _SEGM_END_, _SEGM_LENGTH_, _SIZE_T_, _LIST_SIZE_, _PUSH_BACK_, _ERASE_) \
 _SIZE_T_ i = 0; \
_TYPE_USING_NUMBER_ Random_Number = _STEP_; \
Random_Number *= (_TYPE_USING_NUMBER_)_RAND_NUM_(); \
_While(1) \
{ \
	_For(i = 0; i < _FREE_SPACE_._LIST_SIZE_(); i++) \
	{ \
		Random_Number += _FREE_SPACE_[i]._SEGM_BEGIN_; \
		_If(Random_Number <= _FREE_SPACE_[i]._SEGM_END_) \
		{ \
			GoTo ANNA; \
		} \
		Random_Number -= _FREE_SPACE_[i]._SEGM_END_ + _STEP_; \
	} \
} \
ANNA: \
_If((Random_Number - _SEGM_LENGTH_ >= _FREE_SPACE_[i]._SEGM_BEGIN_) && (Random_Number + _SEGM_LENGTH_ <= _FREE_SPACE_[i]._SEGM_END_)) \
{ \
	_FREE_SPACE_._PUSH_BACK_(_FREE_SPACE_[_FREE_SPACE_._LIST_SIZE_() - 1]); \
	_For(_SIZE_T_ k = _FREE_SPACE_._LIST_SIZE_() - 1; k > i; k--) \
	{ \
		_FREE_SPACE_[k] = _FREE_SPACE_[k - 1]; \
	} \
	_FREE_SPACE_[i]._SEGM_END_ = Random_Number - _SEGM_LENGTH_; \
	_FREE_SPACE_[i + 1]._SEGM_BEGIN_ = Random_Number + _SEGM_LENGTH_; \
} \
_Else \
{ \
	_If(Random_Number - _SEGM_LENGTH_ < _FREE_SPACE_[i]._SEGM_BEGIN_) \
	{\
		_FREE_SPACE_[i]._SEGM_BEGIN_ = Random_Number + _SEGM_LENGTH_; \
	} \
	_Else \
	{ \
		_FREE_SPACE_[i]._SEGM_END_ = Random_Number - _SEGM_LENGTH_; \
	} \
	_If(_FREE_SPACE_[i]._SEGM_END_ < _FREE_SPACE_[i]._SEGM_BEGIN_) \
	{ \
		_ERASE_ (_FREE_SPACE_, i); \
	} \
} \
_COORDS_SEGMENT_LIST_._PUSH_BACK_(Random_Number); \
_Return(_FREE_SPACE_._LIST_SIZE_() != 0);


#define LOOP_GENERATE_SEGMENTS(ADD_SEGMENT) _While(ADD_SEGMENT){  }

#define _THE_STEP_ DECLARE_STEP(DefaultTypeUsingNumber, DAFAULT_STEP)

#define SegmLength 1.0



#define GET_RESULT(_SEGM_LENGTH_, _NUMBER_OF_SEGMENTS_, _BEGIN_OF_RANGE_, _END_OF_RANGE_) _Return(_SEGM_LENGTH_ * _NUMBER_OF_SEGMENTS_) / (_END_OF_RANGE_ - _BEGIN_OF_RANGE_);